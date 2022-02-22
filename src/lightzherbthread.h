// Copyright (c) 2015-2019 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
//

#ifndef Herbcoin_LIGHTZHERBTHREAD_H
#define Herbcoin_LIGHTZHERBTHREAD_H

#include <atomic>
#include "genwit.h"
#include "zherb/accumulators.h"
#include "concurrentqueue.h"
#include "chainparams.h"
#include <boost/function.hpp>
#include <boost/thread.hpp>

extern CChain chainActive;
// Max amount of computation for a single request
const int COMP_MAX_AMOUNT = 60 * 24 * 60;


/****** Thread ********/

class CLightWorker{

private:

    concurrentqueue<CGenWit> requestsQueue;
    std::atomic<bool> isWorkerRunning;
    boost::thread threadIns;

public:

    CLightWorker() {
        isWorkerRunning = false;
    }

    enum ERROR_CODES {
        NOT_ENOUGH_MINTS = 0,
        NON_DETERMINED = 1
    };

    bool addWitWork(CGenWit wit) {
        if (!isWorkerRunning) {
            LogPrintf("%s not running trying to add wit work \n", "herbcoin-light-thread");
            return false;
        }
        requestsQueue.push(wit);
        return true;
    }

    void StartLightZherbThread(boost::thread_group& threadGroup) {
        LogPrintf("%s thread start\n", "herbcoin-light-thread");
        threadIns = boost::thread(boost::bind(&CLightWorker::ThreadLightZHERBSimplified, this));
    }

    void StopLightZherbThread() {
        threadIns.interrupt();
        LogPrintf("%s thread interrupted\n", "herbcoin-light-thread");
    }

private:

    void ThreadLightZHERBSimplified();

    void rejectWork(CGenWit& wit, int blockHeight, uint32_t errorNumber);

};

#endif //Herbcoin_LIGHTZHERBTHREAD_H
