//
//  common.h
//  P2PSP
//
//  This code is distributed under the GNU General Public License (see
//  THE_GENERAL_GNU_PUBLIC_LICENSE.txt for extending this information).
//  Copyright (C) 2016, the P2PSP team.
//  http://www.p2psp.org
//
/*#ifdef __cplusplus
extern "C" {
#endif*/
#ifndef P2PSP_CORE_COMMON_H
#define P2PSP_CORE_COMMON_H

//#include <openssl/sha.h>

namespace p2psp {

class Common {
 public:
  static const int kMaxChunkNumber = 65536;
  // MAX_CHUNK_NUMBER = 2048
  // COUNTERS_TIMING = 0.1
  static const int kCountersTiming = 1;
  static const int kPeerIdLength = 7;          // Size of the IDs used in NTS
                                               // for incorporating peers
  static const int kHelloPacketTiming = 1;     // Time between continuously sent
                                               // packets
  static const int kMaxPeerArrivingTime = 15;  // Maximum time after peer
                                               // retries incorporation
  static const int kMaxTotalIncorporationTime = 60;  // Peers needing longer to
  // incorporate are removed from
  // team
  static const int kMaxPredictedPorts = 20;  // Number of probable source
                                             // ports that will be tried
  static const bool kConsoleMode = true;

  // IMS is enables by defining an IP multicast address
  static const char kDBS = 0;  // DBS magic number
  static const char kACS = 1;  // ACS magic number
  static const char kLRS = 2;  // LRS magic number
  static const char kNTS = 4;  // NIS magic number
  static const char kDIS = 8;  // DIS magic number

  // TODO: Use colors
  // IMS_COLOR = Color.red
  // DBS_COLOR = Color.green
  // ACS_COLOR = Color.blue
  // LRS_COLOR = Color.cyan
  // NTS_COLOR = Color.purple
  // DIS_COLOR = Color.yellow

  /*static void sha256(std::vector<char> string, std::vector<char> &digest) {
    SHA256((unsigned char *)string.data(), string.size(),
           (unsigned char *)digest.data());
  }*/
};
}

#endif  // P2PSP_CORE_COMMON_H
/*#ifdef __cplusplus
}
#endif*/