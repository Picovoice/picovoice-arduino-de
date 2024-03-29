
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = hey computer
static const uint8_t KEYWORD_ARRAY[] = {
        0x97, 0x6f, 0x9c, 0x1d, 0x10, 0xb1, 0xbe, 0xcc, 0x81, 0xc4, 0xe7, 0xf1, 0xeb, 0xcd, 0x55, 0xd6, 0x74, 0x17,
        0xed, 0x0d, 0x6a, 0xbe, 0x39, 0xf7, 0xc6, 0x32, 0xe8, 0x31, 0x27, 0x37, 0x98, 0xea, 0x12, 0xbb, 0x53, 0xd6,
        0xa5, 0x80, 0xe7, 0x7d, 0x67, 0x29, 0x87, 0xf7, 0x09, 0x46, 0xe2, 0x3b, 0x52, 0xbb, 0x64, 0x92, 0x53, 0xb2,
        0x3d, 0x09, 0xd4, 0xa8, 0x7a, 0x34, 0x80, 0xfd, 0x6d, 0x5d, 0x33, 0x9e, 0x85, 0xb3, 0x2c, 0xd0, 0xc4, 0x52,
        0xe4, 0x9d, 0x46, 0x0c, 0x83, 0x36, 0x48, 0x34, 0xb2, 0xfb, 0x51, 0xad, 0xd4, 0x78, 0x30, 0x87, 0xfd, 0xf6,
        0x79, 0x60, 0x3a, 0x4d, 0x53, 0xb8, 0x80, 0x58, 0xa2, 0xf1, 0x68, 0x9e, 0x95, 0x72, 0x9e, 0xbe, 0xd9, 0xa5,
        0xdc, 0x15, 0xaa, 0x18, 0x41, 0xc6, 0x9f, 0xfc, 0x09, 0xef, 0x5a, 0x3a, 0x9f, 0xda, 0x40, 0x5d, 0x32, 0xef,
        0xad, 0x90, 0x22, 0xa1, 0xc7, 0xd7, 0xa0, 0x19, 0xbf, 0xa2, 0x17, 0xd6, 0xcb, 0x2a, 0x81, 0xa2, 0x1d, 0x02,
        0xcf, 0x16, 0xea, 0x2a, 0x29, 0x7a, 0xbc, 0x34, 0x97, 0x83, 0x75, 0x31, 0x7d, 0x7f, 0xf6, 0x1b, 0x72, 0xdb,
        0x07, 0xaf, 0xdd, 0xb6, 0xf9, 0x2a, 0xa4, 0x8d, 0x38, 0xe4, 0x43, 0xd0, 0x40, 0x66, 0x68, 0x4a, 0x2f, 0x21,
        0x23, 0xb5, 0x22, 0x42, 0x27, 0x5a, 0x03, 0x94, 0x93, 0x6d, 0x99, 0xa7, 0x6f, 0x13, 0x4e, 0x4f, 0x32, 0x6e,
        0x8f, 0x5e, 0x36, 0x19, 0xe1, 0x32, 0x08, 0x58, 0xc4, 0xa3, 0xf7, 0x60, 0x17, 0xec, 0xea, 0x78, 0x1d, 0x2b,
        0xbc, 0x6f, 0x80, 0x97, 0x88, 0x88, 0x6f, 0xf9, 0xf4, 0x99, 0x15, 0x12, 0x25, 0x54, 0xdf, 0x02, 0xdb, 0x6b,
        0x35, 0x04, 0x51, 0xd7, 0x5d, 0x7e, 0xee, 0xef, 0x85, 0x48, 0x55, 0x5c, 0x70, 0x70, 0xbb, 0xc2, 0x8f, 0x92,
        0x67, 0x43, 0x81, 0xa1, 0xca, 0x89, 0xf7, 0xa4, 0xd1, 0xa9, 0x86, 0x34, 0x41, 0xfa, 0xc0, 0x04, 0x9b, 0xcd,
        0x7e, 0x45, 0xbd, 0x8f, 0x72, 0x06, 0x0c, 0x40, 0x3e, 0x68, 0x62, 0x08, 0x76, 0xca, 0xbe, 0xef, 0xad, 0x18,
        0x3f, 0x2c, 0x68, 0x99, 0xfb, 0xb0, 0x9b, 0x4b, 0x64, 0x90, 0x8c, 0x70, 0xfe, 0x9d, 0xb4, 0x99, 0x3f, 0x30,
        0x5e, 0x8a, 0xea, 0x72, 0x2d, 0x2b, 0xb6, 0x77, 0x3f, 0x6e, 0xfd, 0x47, 0x7d, 0x1d, 0x44, 0xcb, 0x2d, 0x86,
        0x56, 0x95, 0xbf, 0xc9, 0xf8, 0x13, 0x3a, 0x3b, 0xd8, 0x15, 0x29, 0x08, 0x12, 0x34, 0x16, 0xca, 0x01, 0xde,
        0x99, 0xc9, 0xe7, 0x1a, 0x56, 0x64, 0x17, 0x2a, 0x1a, 0x24, 0xb8, 0x50, 0x01, 0x5c, 0x89, 0x07, 0x0c, 0x8c,
        0x9c, 0x0c, 0x1a, 0x3f, 0xea, 0x05, 0x67, 0x84, 0xd5, 0xc7, 0x6f, 0xe2, 0x3f, 0x92, 0x7c, 0x62, 0x0b, 0xb9,
        0xaa, 0xac, 0xa3, 0x68, 0x72, 0xb1, 0xca, 0x68, 0xf4, 0x3d, 0x95, 0x06, 0x14, 0x55, 0x4f, 0xb4, 0x84, 0x3d,
        0x5c, 0x49, 0x25, 0x52, 0x0a, 0x3a, 0xf5, 0x8b, 0x2d, 0x5f, 0x3e, 0x3d, 0x71, 0x0d, 0xae, 0xa1, 0x9d, 0x22,
        0xc7, 0x6e, 0xcf, 0x94, 0xec, 0xc5, 0xc0, 0x10, 0xbd, 0xc7, 0x54, 0x84, 0x72, 0x9a, 0xf3, 0x2e, 0xd0, 0xe0,
        0x29, 0x54, 0xda, 0xe2, 0x69, 0x76, 0x7c, 0x71, 0x5d, 0x1c, 0xb9, 0x7a, 0xe8, 0x5f, 0x19, 0x34, 0xe8, 0x49,
        0xa6, 0x61, 0x9c, 0x37, 0x0a, 0x5c, 0xac, 0x4b, 0x25, 0xe1, 0x44, 0x82, 0x0b, 0xe1, 0xe8, 0xbb, 0xdb, 0xae,
        0xcd, 0x55, 0x7b, 0xa9, 0xab, 0x94, 0x65, 0x15, 0x79, 0x27, 0x40, 0x83, 0x97, 0x08, 0xc2, 0x22, 0xb0, 0x31,
        0x36, 0x3a, 0x1e, 0x7e, 0x7d, 0x2b, 0x78, 0x30, 0x7c, 0x49, 0x1c, 0xa2, 0x65, 0x41, 0x95, 0x28, 0xef, 0x4d,
        0xa6, 0xb5, 0xab, 0xd9, 0xc7, 0x87, 0x18, 0xa9, 0x93, 0xb3, 0x78, 0x07, 0xf6, 0x62, 0x15, 0x58, 0x69, 0x50,
        0x52, 0xc8, 0x68, 0x37, 0xf3, 0x3e, 0x4e, 0x4b, 0xa8, 0x85, 0x1d, 0xcc, 0x77, 0x0e, 0x9e, 0x4c, 0x13, 0xee,
        0x72, 0xb4, 0xf4, 0x8f, 0x47, 0x8e, 0x55, 0x74, 0x45, 0xc6, 0x2f, 0x43
};

// context = beleuchtung
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x64, 0x65, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f,
        0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0x66, 0xc3, 0xa4, 0x72, 0x62,
        0x65, 0x2c, 0x20, 0xc3, 0xa4, 0x6e, 0x64, 0x65, 0x72, 0x65, 0x2c, 0x20, 0x6d, 0x61, 0x63, 0x68, 0x65, 0x5d,
        0x20, 0x28, 0x61, 0x6c, 0x6c, 0x65, 0x2c, 0x20, 0x64, 0x69, 0x65, 0x2c, 0x20, 0x64, 0x61, 0x73, 0x29, 0x20,
        0x5b, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x2c, 0x20, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x65, 0x72, 0x5d, 0x20, 0x28,
        0x7a, 0x75, 0x2c, 0x20, 0x69, 0x6e, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x63,
        0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x22, 0x5b, 0x66, 0xc3, 0xa4, 0x72, 0x62, 0x65, 0x2c, 0x20, 0xc3, 0xa4, 0x6e, 0x64, 0x65, 0x72,
        0x65, 0x2c, 0x20, 0x6d, 0x61, 0x63, 0x68, 0x65, 0x5d, 0x20, 0x28, 0x61, 0x6c, 0x6c, 0x65, 0x2c, 0x20, 0x64,
        0x69, 0x65, 0x2c, 0x20, 0x64, 0x61, 0x73, 0x29, 0x20, 0x28, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x2c, 0x20, 0x4c,
        0x69, 0x63, 0x68, 0x74, 0x65, 0x72, 0x29, 0x20, 0x28, 0x69, 0x6d, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74,
        0x69, 0x6f, 0x6e, 0x20, 0x28, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x2c, 0x20, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x65,
        0x72, 0x29, 0x20, 0x28, 0x7a, 0x75, 0x2c, 0x20, 0x69, 0x6e, 0x29, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72,
        0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65,
        0x53, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x4d, 0x61,
        0x63, 0x68, 0x65, 0x29, 0x20, 0x28, 0x61, 0x6c, 0x6c, 0x65, 0x2c, 0x20, 0x64, 0x69, 0x65, 0x2c, 0x20, 0x64,
        0x61, 0x73, 0x29, 0x20, 0x5b, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x2c, 0x20, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x65,
        0x72, 0x5d, 0x20, 0x24, 0x73, 0x74, 0x61, 0x74, 0x65, 0x3a, 0x73, 0x74, 0x61, 0x74, 0x65, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x4d, 0x61, 0x63, 0x68, 0x65, 0x29, 0x20, 0x28, 0x61, 0x6c, 0x6c,
        0x65, 0x2c, 0x20, 0x64, 0x69, 0x65, 0x2c, 0x20, 0x64, 0x61, 0x73, 0x29, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61,
        0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x4c, 0x69, 0x63,
        0x68, 0x74, 0x2c, 0x20, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x65, 0x72, 0x5d, 0x20, 0x24, 0x73, 0x74, 0x61, 0x74,
        0x65, 0x3a, 0x73, 0x74, 0x61, 0x74, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x28, 0x4d,
        0x61, 0x63, 0x68, 0x65, 0x29, 0x20, 0x28, 0x61, 0x6c, 0x6c, 0x65, 0x2c, 0x20, 0x64, 0x69, 0x65, 0x2c, 0x20,
        0x64, 0x61, 0x73, 0x29, 0x20, 0x5b, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x2c, 0x20, 0x4c, 0x69, 0x63, 0x68, 0x74,
        0x65, 0x72, 0x5d, 0x20, 0x69, 0x6d, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c,
        0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x73,
        0x74, 0x61, 0x74, 0x65, 0x3a, 0x73, 0x74, 0x61, 0x74, 0x65, 0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73,
        0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x62, 0x6c, 0x61, 0x75, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x67, 0x72,
        0xc3, 0xbc, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x6f, 0x72, 0x61, 0x6e, 0x67, 0x65,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x70, 0x69, 0x6e, 0x6b, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0x6c, 0x69, 0x6c, 0x61, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x72,
        0x6f, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x77, 0x65, 0x69, 0xc3, 0x9f, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x67, 0x65, 0x6c, 0x62, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x73, 0x74,
        0x61, 0x74, 0x65, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x6e, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x75, 0x73, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61,
        0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x42, 0x61, 0x64, 0x65,
        0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x53, 0x63, 0x68,
        0x6c, 0x61, 0x66, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x4b, 0x69, 0x6e, 0x64, 0x65, 0x72, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x46, 0x6c, 0x75, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x4b, 0xc3,
        0xbc, 0x63, 0x68, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x57, 0x6f, 0x68, 0x6e, 0x7a,
        0x69, 0x6d, 0x6d, 0x65, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x53, 0x70, 0x65, 0x69,
        0x73, 0x65, 0x6b, 0x61, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1c, 0x00,
        0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
        0x35, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x4e, 0x00,
        0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
        0x6e, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x8b, 0x00,
        0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00,
        0xb4, 0x00, 0x00, 0x00, 0x61, 0x6c, 0x6c, 0x65, 0x00, 0x61, 0x6e, 0x00, 0x61, 0x75, 0x73, 0x00, 0x42, 0x61,
        0x64, 0x65, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x62, 0x6c, 0x61, 0x75, 0x00, 0x64, 0x61, 0x73, 0x00,
        0x64, 0x69, 0x65, 0x00, 0x46, 0x6c, 0x75, 0x72, 0x00, 0x66, 0xc3, 0xa4, 0x72, 0x62, 0x65, 0x00, 0x67, 0x65,
        0x6c, 0x62, 0x00, 0x67, 0x72, 0xc3, 0xbc, 0x6e, 0x00, 0x69, 0x6d, 0x00, 0x69, 0x6e, 0x00, 0x4b, 0x69, 0x6e,
        0x64, 0x65, 0x72, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x4b, 0xc3, 0xbc, 0x63, 0x68, 0x65, 0x00, 0x4c,
        0x69, 0x63, 0x68, 0x74, 0x65, 0x72, 0x00, 0x4c, 0x69, 0x63, 0x68, 0x74, 0x00, 0x6c, 0x69, 0x6c, 0x61, 0x00,
        0x6d, 0x61, 0x63, 0x68, 0x65, 0x00, 0x6f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x00, 0x70, 0x69, 0x6e, 0x6b, 0x00,
        0x72, 0x6f, 0x74, 0x00, 0x53, 0x63, 0x68, 0x6c, 0x61, 0x66, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x53,
        0x70, 0x65, 0x69, 0x73, 0x65, 0x6b, 0x61, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x77, 0x65, 0x69, 0xc3, 0x9f, 0x00,
        0x57, 0x6f, 0x68, 0x6e, 0x7a, 0x69, 0x6d, 0x6d, 0x65, 0x72, 0x00, 0x7a, 0x75, 0x00, 0xc3, 0xa4, 0x6e, 0x64,
        0x65, 0x72, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
        0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00,
        0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
        0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,
        0x15, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x24, 0x00,
        0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00,
        0x39, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x4a, 0x00,
        0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00,
        0x68, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x7a, 0x00,
        0x00, 0x00, 0x01, 0x0e, 0x29, 0x01, 0x12, 0x03, 0x19, 0x05, 0x01, 0x06, 0x29, 0x33, 0x2d, 0x10, 0x26, 0x05,
        0x0e, 0x03, 0x06, 0x01, 0x19, 0x06, 0x0b, 0x08, 0x0e, 0x1b, 0x18, 0x08, 0x2a, 0x18, 0x05, 0x29, 0x09, 0x2a,
        0x0e, 0x16, 0x09, 0x18, 0x1f, 0x12, 0x2d, 0x10, 0x2d, 0x12, 0x0d, 0x2d, 0x12, 0x06, 0x26, 0x33, 0x2d, 0x10,
        0x26, 0x0d, 0x30, 0x21, 0x29, 0x0e, 0x2d, 0x21, 0x1a, 0x26, 0x0e, 0x2d, 0x21, 0x1a, 0x0e, 0x0b, 0x0e, 0x01,
        0x10, 0x01, 0x1e, 0x29, 0x14, 0x18, 0x01, 0x24, 0x31, 0x29, 0x16, 0x2d, 0x24, 0x0d, 0x18, 0x14, 0x1a, 0x2e,
        0x0e, 0x01, 0x08, 0x33, 0x2d, 0x10, 0x26, 0x2e, 0x16, 0x02, 0x20, 0x29, 0x0d, 0x01, 0x10, 0x26, 0x1c, 0x02,
        0x19, 0x1c, 0x14, 0x12, 0x33, 0x2d, 0x10, 0x26, 0x33, 0x1b, 0x2a, 0x12, 0x06, 0x29, 0x18, 0x29, 0x00, 0x00,
        0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x11, 0x00,
        0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
        0x1b, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00,
        0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
        0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00,
        0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00,
        0x00, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x73,
        0x74, 0x61, 0x74, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
        0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00,
        0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x73, 0x74, 0x61, 0x74, 0x65,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00,
        0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00,
        0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x53, 0x74, 0x61, 0x74, 0x65, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x05, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
        0x38, 0x06, 0x00, 0x00, 0x9c, 0x07, 0x00, 0x00, 0x4c, 0x08, 0x00, 0x00, 0xac, 0x08, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
        0x4c, 0x03, 0x00, 0x00, 0xec, 0x04, 0x00, 0x00, 0x9c, 0x05, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
        0xb0, 0x02, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00,
        0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00,
        0x60, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x94, 0x00,
        0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
        0xb4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xe4, 0x00,
        0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0xe4, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00,
        0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 0x30, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xcc, 0x01, 0x00, 0x00,
        0xf0, 0x01, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xcc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x14, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x7c, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x00,
        0x14, 0x02, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x48, 0x02,
        0x00, 0x00, 0x6c, 0x02, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x48, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x14, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x7c, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x14, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
        0xcc, 0x02, 0x00, 0x00, 0x18, 0x03, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x00, 0xb0, 0x02, 0x00, 0x00, 0x08, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xe4, 0x02, 0x00, 0x00, 0x08, 0x03, 0x00, 0x00,
        0xcc, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf8, 0x02,
        0x00, 0x00, 0xe4, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xcc, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x02,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x2c, 0x03, 0x00, 0x00,
        0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb0, 0x02,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x6c, 0x03, 0x00, 0x00, 0x90, 0x03,
        0x00, 0x00, 0xa0, 0x03, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x6c, 0x03, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0xa0, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xd0, 0x03, 0x00, 0x00, 0x1c, 0x04, 0x00, 0x00, 0x40, 0x04,
        0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00,
        0xe8, 0x03, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00, 0xd0, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 0x1c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00,
        0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0xb8, 0x04, 0x00, 0x00, 0xdc, 0x04, 0x00, 0x00, 0x50, 0x04, 0x00, 0x00,
        0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0xa8, 0x04,
        0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x98, 0x04, 0x00, 0x00, 0x84, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x50, 0x04, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xcc, 0x04,
        0x00, 0x00, 0xb8, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x50, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
        0xec, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x05,
        0x00, 0x00, 0x68, 0x05, 0x00, 0x00, 0x8c, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x34, 0x05, 0x00, 0x00, 0x58, 0x05, 0x00, 0x00, 0x1c, 0x05,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x48, 0x05, 0x00, 0x00,
        0x34, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x05,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x7c, 0x05, 0x00, 0x00, 0x68, 0x05,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00,
        0x28, 0x06, 0x00, 0x00, 0x9c, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0xd0, 0x05, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe4, 0x05, 0x00, 0x00, 0xd0, 0x05, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x05, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x03, 0x00, 0x00, 0x00, 0x54, 0x06, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00, 0x64, 0x07, 0x00, 0x00, 0x38, 0x06,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x6c, 0x06, 0x00, 0x00,
        0xcc, 0x06, 0x00, 0x00, 0x54, 0x06, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00,
        0x00, 0x00, 0x84, 0x06, 0x00, 0x00, 0x94, 0x06, 0x00, 0x00, 0x6c, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0x06, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0x94, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xbc, 0x06, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe0, 0x06, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00, 0x08, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf4, 0x06, 0x00, 0x00, 0xe0, 0x06, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x06, 0x00, 0x00, 0x08, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x07, 0x00, 0x00, 0x2c, 0x07, 0x00, 0x00,
        0x04, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x07,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x40, 0x07, 0x00, 0x00,
        0x2c, 0x07, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x54, 0x07,
        0x00, 0x00, 0x40, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x38, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x78, 0x07,
        0x00, 0x00, 0x64, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x8c, 0x07, 0x00, 0x00, 0x78, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00,
        0xb4, 0x07, 0x00, 0x00, 0x14, 0x08, 0x00, 0x00, 0x9c, 0x07, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xcc, 0x07, 0x00, 0x00, 0xdc, 0x07, 0x00, 0x00, 0xb4, 0x07, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb4, 0x07, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x00, 0x00, 0xdc, 0x07, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0xf0, 0x07,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x07, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x14, 0x08,
        0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x08, 0x00, 0x00,
        0x28, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x64, 0x08, 0x00, 0x00,
        0x74, 0x08, 0x00, 0x00, 0x4c, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x4c, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x88, 0x08, 0x00, 0x00, 0x74, 0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x9c, 0x08, 0x00, 0x00, 0x88, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xc0, 0x08, 0x00, 0x00, 0xac, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0xd4, 0x08, 0x00, 0x00, 0xc0, 0x08, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    