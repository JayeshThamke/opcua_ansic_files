/* ========================================================================
 * Copyright (c) 2005-2016 The OPC Foundation, Inc. All rights reserved.
 *
 * OPC Foundation MIT License 1.00
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * The complete license agreement can be found here:
 * http://opcfoundation.org/License/MIT/1.00/
 * ======================================================================*/

#ifndef _OpcUaDi_Identifiers_H_
#define _OpcUaDi_Identifiers_H_ 1


/*============================================================================
* DataType Identifiers
 *===========================================================================*/
#define OpcUaId_DeviceHealthEnumeration 6244
#define OpcUaId_TransferStatusType 6417
#define OpcUaId_TransferResult 6418
#define OpcUaId_ParameterResult 6419

/*============================================================================
* Method Identifiers
 *===========================================================================*/
#define OpcUaId_DeviceSet_DeviceName_Lock_InitLock 6044
#define OpcUaId_DeviceSet_DeviceName_Lock_RenewLock 6047
#define OpcUaId_DeviceSet_DeviceName_Lock_ExitLock 6049
#define OpcUaId_DeviceSet_DeviceName_Lock_BreakLock 6051
#define OpcUaId_DeviceSet_DeviceName_EditMode_EnterEditMode 6054
#define OpcUaId_DeviceSet_DeviceName_EditMode_ExitEditMode 6057
#define OpcUaId_DeviceSet_DeviceName_EditMode_AbortEditMode 6059
#define OpcUaId_NetworkSet_NetworkName_Lock_InitLock 6085
#define OpcUaId_NetworkSet_NetworkName_Lock_RenewLock 6088
#define OpcUaId_NetworkSet_NetworkName_Lock_ExitLock 6090
#define OpcUaId_NetworkSet_NetworkName_Lock_BreakLock 6092
#define OpcUaId_DeviceTopology_NetworkName_Lock_InitLock 6102
#define OpcUaId_DeviceTopology_NetworkName_Lock_RenewLock 6105
#define OpcUaId_DeviceTopology_NetworkName_Lock_ExitLock 6107
#define OpcUaId_DeviceTopology_NetworkName_Lock_BreakLock 6109
#define OpcUaId_CommunicationDevices_DeviceName_Lock_InitLock 6124
#define OpcUaId_CommunicationDevices_DeviceName_Lock_RenewLock 6127
#define OpcUaId_CommunicationDevices_DeviceName_Lock_ExitLock 6129
#define OpcUaId_CommunicationDevices_DeviceName_Lock_BreakLock 6131
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_EnterEditMode 6134
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_ExitEditMode 6137
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_AbortEditMode 6139
#define OpcUaId_TopologyElementType_MethodSet_MethodIdentifier 6018
#define OpcUaId_TopologyElementType_Lock_InitLock 6166
#define OpcUaId_TopologyElementType_Lock_RenewLock 6169
#define OpcUaId_TopologyElementType_Lock_ExitLock 6171
#define OpcUaId_TopologyElementType_Lock_BreakLock 6173
#define OpcUaId_TopologyElementType_EditMode_EnterEditMode 6176
#define OpcUaId_TopologyElementType_EditMode_ExitEditMode 6179
#define OpcUaId_TopologyElementType_EditMode_AbortEditMode 6181
#define OpcUaId_DeviceType_Lock_InitLock 6191
#define OpcUaId_DeviceType_Lock_RenewLock 6194
#define OpcUaId_DeviceType_Lock_ExitLock 6196
#define OpcUaId_DeviceType_Lock_BreakLock 6198
#define OpcUaId_DeviceType_EditMode_EnterEditMode 6201
#define OpcUaId_DeviceType_EditMode_ExitEditMode 6204
#define OpcUaId_DeviceType_EditMode_AbortEditMode 6206
#define OpcUaId_BlockType_Lock_InitLock 6225
#define OpcUaId_BlockType_Lock_RenewLock 6228
#define OpcUaId_BlockType_Lock_ExitLock 6230
#define OpcUaId_BlockType_Lock_BreakLock 6232
#define OpcUaId_BlockType_EditMode_EnterEditMode 6235
#define OpcUaId_BlockType_EditMode_ExitEditMode 6238
#define OpcUaId_BlockType_EditMode_AbortEditMode 6240
#define OpcUaId_FunctionalGroupType_MethodIdentifier 6029
#define OpcUaId_NetworkType_CPIdentifier_Lock_InitLock 6260
#define OpcUaId_NetworkType_CPIdentifier_Lock_RenewLock 6263
#define OpcUaId_NetworkType_CPIdentifier_Lock_ExitLock 6265
#define OpcUaId_NetworkType_CPIdentifier_Lock_BreakLock 6267
#define OpcUaId_NetworkType_CPIdentifier_EditMode_EnterEditMode 6270
#define OpcUaId_NetworkType_CPIdentifier_EditMode_ExitEditMode 6273
#define OpcUaId_NetworkType_CPIdentifier_EditMode_AbortEditMode 6275
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_InitLock 6283
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_RenewLock 6286
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_ExitLock 6288
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_BreakLock 6290
#define OpcUaId_NetworkType_Lock_InitLock 6299
#define OpcUaId_NetworkType_Lock_RenewLock 6302
#define OpcUaId_NetworkType_Lock_ExitLock 6304
#define OpcUaId_NetworkType_Lock_BreakLock 6306
#define OpcUaId_ConnectionPointType_Lock_InitLock 6322
#define OpcUaId_ConnectionPointType_Lock_RenewLock 6325
#define OpcUaId_ConnectionPointType_Lock_ExitLock 6327
#define OpcUaId_ConnectionPointType_Lock_BreakLock 6329
#define OpcUaId_ConnectionPointType_EditMode_EnterEditMode 6332
#define OpcUaId_ConnectionPointType_EditMode_ExitEditMode 6335
#define OpcUaId_ConnectionPointType_EditMode_AbortEditMode 6337
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_InitLock 6345
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_RenewLock 6348
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_ExitLock 6350
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_BreakLock 6352
#define OpcUaId_OnlineElementType_Lock_InitLock 6370
#define OpcUaId_OnlineElementType_Lock_RenewLock 6373
#define OpcUaId_OnlineElementType_Lock_ExitLock 6375
#define OpcUaId_OnlineElementType_Lock_BreakLock 6377
#define OpcUaId_OnlineElementType_EditMode_EnterEditMode 6380
#define OpcUaId_OnlineElementType_EditMode_ExitEditMode 6383
#define OpcUaId_OnlineElementType_EditMode_AbortEditMode 6385
#define OpcUaId_LockingServicesType_InitLock 6393
#define OpcUaId_LockingServicesType_RenewLock 6396
#define OpcUaId_LockingServicesType_ExitLock 6398
#define OpcUaId_LockingServicesType_BreakLock 6400
#define OpcUaId_EditModeType_EnterEditMode 6403
#define OpcUaId_EditModeType_ExitEditMode 6406
#define OpcUaId_EditModeType_AbortEditMode 6408
#define OpcUaId_TransferToDevice 6410
#define OpcUaId_TransferFromDevice 6412
#define OpcUaId_FetchTransferResultData 6414

/*============================================================================
* Object Identifiers
 *===========================================================================*/
#define OpcUaId_DeviceSet 5001
#define OpcUaId_DeviceSet_DeviceName_ParameterSet 6033
#define OpcUaId_NetworkSet 6078
#define OpcUaId_DeviceTopology 6094
#define OpcUaId_CommunicationDevices 6111
#define OpcUaId_CommunicationDevices_DeviceName_ParameterSet 6113
#define OpcUaId_TopologyElementType_ParameterSet 5002
#define OpcUaId_TopologyElementType_MethodSet 5003
#define OpcUaId_TopologyElementType_GroupName 6158
#define OpcUaId_TopologyElementType_Identification 6014
#define OpcUaId_TopologyElementType_Lock 6161
#define OpcUaId_TopologyElementType_EditMode 6175
#define OpcUaId_DeviceType_DeviceTypeImage 6209
#define OpcUaId_DeviceType_Documentation 6211
#define OpcUaId_DeviceType_ProtocolSupport 6213
#define OpcUaId_DeviceType_ImageSet 6215
#define OpcUaId_ConfigurableObjectType_SupportedTypes 5004
#define OpcUaId_ConfigurableObjectType_ObjectIdentifier 6026
#define OpcUaId_FunctionalGroupType_GroupIdentifier 6027
#define OpcUaId_NetworkType_CPIdentifier 6248
#define OpcUaId_NetworkType_CPIdentifier_ParameterSet 6249
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock 6278
#define OpcUaId_NetworkType_CPIdentifier_NetworkAddress 6292
#define OpcUaId_NetworkType_Lock 6294
#define OpcUaId_ConnectionPointType_NetworkIdentifier 6339
#define OpcUaId_ConnectionPointType_NetworkAddress 6354
#define OpcUaId_TransferStatusType_Encoding_DefaultXml 6420
#define OpcUaId_TransferResult_Encoding_DefaultXml 6421
#define OpcUaId_ParameterResult_Encoding_DefaultXml 6422
#define OpcUaId_TransferStatusType_Encoding_DefaultBinary 6432
#define OpcUaId_TransferResult_Encoding_DefaultBinary 6433
#define OpcUaId_ParameterResult_Encoding_DefaultBinary 6434

/*============================================================================
* ObjectType Identifiers
 *===========================================================================*/
#define OpcUaId_TopologyElementType 1001
#define OpcUaId_DeviceType 1002
#define OpcUaId_BlockType 1003
#define OpcUaId_ConfigurableObjectType 1004
#define OpcUaId_FunctionalGroupType 1005
#define OpcUaId_ProtocolType 1006
#define OpcUaId_NetworkType 6247
#define OpcUaId_ConnectionPointType 6308
#define OpcUaId_OnlineElementType 6356
#define OpcUaId_LockingServicesType 6388
#define OpcUaId_EditModeType 6402

/*============================================================================
* ReferenceType Identifiers
 *===========================================================================*/
#define OpcUaId_Uses 4001
#define OpcUaId_ConnectsTo 6030
#define OpcUaId_IsOnline 6031

/*============================================================================
* Variable Identifiers
 *===========================================================================*/
#define OpcUaId_DeviceSet_DeviceName_Lock_LockedStatus 6040
#define OpcUaId_DeviceSet_DeviceName_Lock_LockingClient 6041
#define OpcUaId_DeviceSet_DeviceName_Lock_LockingUser 6042
#define OpcUaId_DeviceSet_DeviceName_Lock_RemainingLockTime 6043
#define OpcUaId_DeviceSet_DeviceName_Lock_InitLock_InputArguments 6045
#define OpcUaId_DeviceSet_DeviceName_Lock_InitLock_OutputArguments 6046
#define OpcUaId_DeviceSet_DeviceName_Lock_RenewLock_OutputArguments 6048
#define OpcUaId_DeviceSet_DeviceName_Lock_ExitLock_OutputArguments 6050
#define OpcUaId_DeviceSet_DeviceName_Lock_BreakLock_OutputArguments 6052
#define OpcUaId_DeviceSet_DeviceName_EditMode_EnterEditMode_InputArguments 6055
#define OpcUaId_DeviceSet_DeviceName_EditMode_EnterEditMode_OutputArguments 6056
#define OpcUaId_DeviceSet_DeviceName_EditMode_ExitEditMode_OutputArguments 6058
#define OpcUaId_DeviceSet_DeviceName_EditMode_AbortEditMode_OutputArguments 6060
#define OpcUaId_DeviceSet_DeviceName_SerialNumber 6061
#define OpcUaId_DeviceSet_DeviceName_RevisionCounter 6062
#define OpcUaId_DeviceSet_DeviceName_Manufacturer 6063
#define OpcUaId_DeviceSet_DeviceName_Model 6064
#define OpcUaId_DeviceSet_DeviceName_DeviceManual 6065
#define OpcUaId_DeviceSet_DeviceName_DeviceRevision 6066
#define OpcUaId_DeviceSet_DeviceName_SoftwareRevision 6067
#define OpcUaId_DeviceSet_DeviceName_HardwareRevision 6068
#define OpcUaId_DeviceSet_DeviceName_DeviceHealth 6069
#define OpcUaId_NetworkSet_NetworkName_Lock_LockedStatus 6081
#define OpcUaId_NetworkSet_NetworkName_Lock_LockingClient 6082
#define OpcUaId_NetworkSet_NetworkName_Lock_LockingUser 6083
#define OpcUaId_NetworkSet_NetworkName_Lock_RemainingLockTime 6084
#define OpcUaId_NetworkSet_NetworkName_Lock_InitLock_InputArguments 6086
#define OpcUaId_NetworkSet_NetworkName_Lock_InitLock_OutputArguments 6087
#define OpcUaId_NetworkSet_NetworkName_Lock_RenewLock_OutputArguments 6089
#define OpcUaId_NetworkSet_NetworkName_Lock_ExitLock_OutputArguments 6091
#define OpcUaId_NetworkSet_NetworkName_Lock_BreakLock_OutputArguments 6093
#define OpcUaId_DeviceTopology_OnlineAccess 6095
#define OpcUaId_DeviceTopology_NetworkName_Lock_LockedStatus 6098
#define OpcUaId_DeviceTopology_NetworkName_Lock_LockingClient 6099
#define OpcUaId_DeviceTopology_NetworkName_Lock_LockingUser 6100
#define OpcUaId_DeviceTopology_NetworkName_Lock_RemainingLockTime 6101
#define OpcUaId_DeviceTopology_NetworkName_Lock_InitLock_InputArguments 6103
#define OpcUaId_DeviceTopology_NetworkName_Lock_InitLock_OutputArguments 6104
#define OpcUaId_DeviceTopology_NetworkName_Lock_RenewLock_OutputArguments 6106
#define OpcUaId_DeviceTopology_NetworkName_Lock_ExitLock_OutputArguments 6108
#define OpcUaId_DeviceTopology_NetworkName_Lock_BreakLock_OutputArguments 6110
#define OpcUaId_CommunicationDevices_DeviceName_Lock_LockedStatus 6120
#define OpcUaId_CommunicationDevices_DeviceName_Lock_LockingClient 6121
#define OpcUaId_CommunicationDevices_DeviceName_Lock_LockingUser 6122
#define OpcUaId_CommunicationDevices_DeviceName_Lock_RemainingLockTime 6123
#define OpcUaId_CommunicationDevices_DeviceName_Lock_InitLock_InputArguments 6125
#define OpcUaId_CommunicationDevices_DeviceName_Lock_InitLock_OutputArguments 6126
#define OpcUaId_CommunicationDevices_DeviceName_Lock_RenewLock_OutputArguments 6128
#define OpcUaId_CommunicationDevices_DeviceName_Lock_ExitLock_OutputArguments 6130
#define OpcUaId_CommunicationDevices_DeviceName_Lock_BreakLock_OutputArguments 6132
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_EnterEditMode_InputArguments 6135
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_EnterEditMode_OutputArguments 6136
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_ExitEditMode_OutputArguments 6138
#define OpcUaId_CommunicationDevices_DeviceName_EditMode_AbortEditMode_OutputArguments 6140
#define OpcUaId_CommunicationDevices_DeviceName_SerialNumber 6141
#define OpcUaId_CommunicationDevices_DeviceName_RevisionCounter 6142
#define OpcUaId_CommunicationDevices_DeviceName_Manufacturer 6143
#define OpcUaId_CommunicationDevices_DeviceName_Model 6144
#define OpcUaId_CommunicationDevices_DeviceName_DeviceManual 6145
#define OpcUaId_CommunicationDevices_DeviceName_DeviceRevision 6146
#define OpcUaId_CommunicationDevices_DeviceName_SoftwareRevision 6147
#define OpcUaId_CommunicationDevices_DeviceName_HardwareRevision 6148
#define OpcUaId_CommunicationDevices_DeviceName_DeviceHealth 6149
#define OpcUaId_TopologyElementType_ParameterSet_ParameterIdentifier 6017
#define OpcUaId_TopologyElementType_Lock_LockedStatus 6162
#define OpcUaId_TopologyElementType_Lock_LockingClient 6163
#define OpcUaId_TopologyElementType_Lock_LockingUser 6164
#define OpcUaId_TopologyElementType_Lock_RemainingLockTime 6165
#define OpcUaId_TopologyElementType_Lock_InitLock_InputArguments 6167
#define OpcUaId_TopologyElementType_Lock_InitLock_OutputArguments 6168
#define OpcUaId_TopologyElementType_Lock_RenewLock_OutputArguments 6170
#define OpcUaId_TopologyElementType_Lock_ExitLock_OutputArguments 6172
#define OpcUaId_TopologyElementType_Lock_BreakLock_OutputArguments 6174
#define OpcUaId_TopologyElementType_EditMode_EnterEditMode_InputArguments 6177
#define OpcUaId_TopologyElementType_EditMode_EnterEditMode_OutputArguments 6178
#define OpcUaId_TopologyElementType_EditMode_ExitEditMode_OutputArguments 6180
#define OpcUaId_TopologyElementType_EditMode_AbortEditMode_OutputArguments 6182
#define OpcUaId_DeviceType_Lock_LockedStatus 6187
#define OpcUaId_DeviceType_Lock_LockingClient 6188
#define OpcUaId_DeviceType_Lock_LockingUser 6189
#define OpcUaId_DeviceType_Lock_RemainingLockTime 6190
#define OpcUaId_DeviceType_Lock_InitLock_InputArguments 6192
#define OpcUaId_DeviceType_Lock_InitLock_OutputArguments 6193
#define OpcUaId_DeviceType_Lock_RenewLock_OutputArguments 6195
#define OpcUaId_DeviceType_Lock_ExitLock_OutputArguments 6197
#define OpcUaId_DeviceType_Lock_BreakLock_OutputArguments 6199
#define OpcUaId_DeviceType_EditMode_EnterEditMode_InputArguments 6202
#define OpcUaId_DeviceType_EditMode_EnterEditMode_OutputArguments 6203
#define OpcUaId_DeviceType_EditMode_ExitEditMode_OutputArguments 6205
#define OpcUaId_DeviceType_EditMode_AbortEditMode_OutputArguments 6207
#define OpcUaId_DeviceType_SerialNumber 6001
#define OpcUaId_DeviceType_RevisionCounter 6002
#define OpcUaId_DeviceType_Manufacturer 6003
#define OpcUaId_DeviceType_Model 6004
#define OpcUaId_DeviceType_DeviceManual 6005
#define OpcUaId_DeviceType_DeviceRevision 6006
#define OpcUaId_DeviceType_SoftwareRevision 6007
#define OpcUaId_DeviceType_HardwareRevision 6008
#define OpcUaId_DeviceType_DeviceHealth 6208
#define OpcUaId_DeviceType_DeviceTypeImage_ImageIdentifier 6210
#define OpcUaId_DeviceType_Documentation_DocumentIdentifier 6212
#define OpcUaId_DeviceType_ProtocolSupport_ProtocolSupportIdentifier 6214
#define OpcUaId_DeviceType_ImageSet_ImageIdentifier 6216
#define OpcUaId_BlockType_Lock_LockedStatus 6221
#define OpcUaId_BlockType_Lock_LockingClient 6222
#define OpcUaId_BlockType_Lock_LockingUser 6223
#define OpcUaId_BlockType_Lock_RemainingLockTime 6224
#define OpcUaId_BlockType_Lock_InitLock_InputArguments 6226
#define OpcUaId_BlockType_Lock_InitLock_OutputArguments 6227
#define OpcUaId_BlockType_Lock_RenewLock_OutputArguments 6229
#define OpcUaId_BlockType_Lock_ExitLock_OutputArguments 6231
#define OpcUaId_BlockType_Lock_BreakLock_OutputArguments 6233
#define OpcUaId_BlockType_EditMode_EnterEditMode_InputArguments 6236
#define OpcUaId_BlockType_EditMode_EnterEditMode_OutputArguments 6237
#define OpcUaId_BlockType_EditMode_ExitEditMode_OutputArguments 6239
#define OpcUaId_BlockType_EditMode_AbortEditMode_OutputArguments 6241
#define OpcUaId_BlockType_RevisionCounter 6009
#define OpcUaId_BlockType_ActualMode 6010
#define OpcUaId_BlockType_PermittedMode 6011
#define OpcUaId_BlockType_NormalMode 6012
#define OpcUaId_BlockType_TargetMode 6013
#define OpcUaId_FunctionalGroupType_GroupIdentifier_UIElement 6242
#define OpcUaId_FunctionalGroupType_ParameterIdentifier 6028
#define OpcUaId_FunctionalGroupType_UIElement 6243
#define OpcUaId_DeviceHealthEnumeration_EnumStrings 6450
#define OpcUaId_NetworkType_CPIdentifier_Lock_LockedStatus 6256
#define OpcUaId_NetworkType_CPIdentifier_Lock_LockingClient 6257
#define OpcUaId_NetworkType_CPIdentifier_Lock_LockingUser 6258
#define OpcUaId_NetworkType_CPIdentifier_Lock_RemainingLockTime 6259
#define OpcUaId_NetworkType_CPIdentifier_Lock_InitLock_InputArguments 6261
#define OpcUaId_NetworkType_CPIdentifier_Lock_InitLock_OutputArguments 6262
#define OpcUaId_NetworkType_CPIdentifier_Lock_RenewLock_OutputArguments 6264
#define OpcUaId_NetworkType_CPIdentifier_Lock_ExitLock_OutputArguments 6266
#define OpcUaId_NetworkType_CPIdentifier_Lock_BreakLock_OutputArguments 6268
#define OpcUaId_NetworkType_CPIdentifier_EditMode_EnterEditMode_InputArguments 6271
#define OpcUaId_NetworkType_CPIdentifier_EditMode_EnterEditMode_OutputArguments 6272
#define OpcUaId_NetworkType_CPIdentifier_EditMode_ExitEditMode_OutputArguments 6274
#define OpcUaId_NetworkType_CPIdentifier_EditMode_AbortEditMode_OutputArguments 6276
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_LockedStatus 6279
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_LockingClient 6280
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_LockingUser 6281
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_RemainingLockTime 6282
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_InitLock_InputArguments 6284
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_InitLock_OutputArguments 6285
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_RenewLock_OutputArguments 6287
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_ExitLock_OutputArguments 6289
#define OpcUaId_NetworkType_CPIdentifier_NetworkIdentifier_Lock_BreakLock_OutputArguments 6291
#define OpcUaId_NetworkType_Lock_LockedStatus 6295
#define OpcUaId_NetworkType_Lock_LockingClient 6296
#define OpcUaId_NetworkType_Lock_LockingUser 6297
#define OpcUaId_NetworkType_Lock_RemainingLockTime 6298
#define OpcUaId_NetworkType_Lock_InitLock_InputArguments 6300
#define OpcUaId_NetworkType_Lock_InitLock_OutputArguments 6301
#define OpcUaId_NetworkType_Lock_RenewLock_OutputArguments 6303
#define OpcUaId_NetworkType_Lock_ExitLock_OutputArguments 6305
#define OpcUaId_NetworkType_Lock_BreakLock_OutputArguments 6307
#define OpcUaId_ConnectionPointType_Lock_LockedStatus 6318
#define OpcUaId_ConnectionPointType_Lock_LockingClient 6319
#define OpcUaId_ConnectionPointType_Lock_LockingUser 6320
#define OpcUaId_ConnectionPointType_Lock_RemainingLockTime 6321
#define OpcUaId_ConnectionPointType_Lock_InitLock_InputArguments 6323
#define OpcUaId_ConnectionPointType_Lock_InitLock_OutputArguments 6324
#define OpcUaId_ConnectionPointType_Lock_RenewLock_OutputArguments 6326
#define OpcUaId_ConnectionPointType_Lock_ExitLock_OutputArguments 6328
#define OpcUaId_ConnectionPointType_Lock_BreakLock_OutputArguments 6330
#define OpcUaId_ConnectionPointType_EditMode_EnterEditMode_InputArguments 6333
#define OpcUaId_ConnectionPointType_EditMode_EnterEditMode_OutputArguments 6334
#define OpcUaId_ConnectionPointType_EditMode_ExitEditMode_OutputArguments 6336
#define OpcUaId_ConnectionPointType_EditMode_AbortEditMode_OutputArguments 6338
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_LockedStatus 6341
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_LockingClient 6342
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_LockingUser 6343
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_RemainingLockTime 6344
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_InitLock_InputArguments 6346
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_InitLock_OutputArguments 6347
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_RenewLock_OutputArguments 6349
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_ExitLock_OutputArguments 6351
#define OpcUaId_ConnectionPointType_NetworkIdentifier_Lock_BreakLock_OutputArguments 6353
#define OpcUaId_OnlineElementType_Lock_LockedStatus 6366
#define OpcUaId_OnlineElementType_Lock_LockingClient 6367
#define OpcUaId_OnlineElementType_Lock_LockingUser 6368
#define OpcUaId_OnlineElementType_Lock_RemainingLockTime 6369
#define OpcUaId_OnlineElementType_Lock_InitLock_InputArguments 6371
#define OpcUaId_OnlineElementType_Lock_InitLock_OutputArguments 6372
#define OpcUaId_OnlineElementType_Lock_RenewLock_OutputArguments 6374
#define OpcUaId_OnlineElementType_Lock_ExitLock_OutputArguments 6376
#define OpcUaId_OnlineElementType_Lock_BreakLock_OutputArguments 6378
#define OpcUaId_OnlineElementType_EditMode_EnterEditMode_InputArguments 6381
#define OpcUaId_OnlineElementType_EditMode_EnterEditMode_OutputArguments 6382
#define OpcUaId_OnlineElementType_EditMode_ExitEditMode_OutputArguments 6384
#define OpcUaId_OnlineElementType_EditMode_AbortEditMode_OutputArguments 6386
#define OpcUaId_MaxInactiveLockTime 6387
#define OpcUaId_LockingServicesType_LockedStatus 6389
#define OpcUaId_LockingServicesType_LockingClient 6390
#define OpcUaId_LockingServicesType_LockingUser 6391
#define OpcUaId_LockingServicesType_RemainingLockTime 6392
#define OpcUaId_LockingServicesType_InitLock_InputArguments 6394
#define OpcUaId_LockingServicesType_InitLock_OutputArguments 6395
#define OpcUaId_LockingServicesType_RenewLock_OutputArguments 6397
#define OpcUaId_LockingServicesType_ExitLock_OutputArguments 6399
#define OpcUaId_LockingServicesType_BreakLock_OutputArguments 6401
#define OpcUaId_EditModeType_EnterEditMode_InputArguments 6404
#define OpcUaId_EditModeType_EnterEditMode_OutputArguments 6405
#define OpcUaId_EditModeType_ExitEditMode_OutputArguments 6407
#define OpcUaId_EditModeType_AbortEditMode_OutputArguments 6409
#define OpcUaId_TransferToDevice_OutputArguments 6411
#define OpcUaId_TransferFromDevice_OutputArguments 6413
#define OpcUaId_FetchTransferResultData_InputArguments 6415
#define OpcUaId_FetchTransferResultData_OutputArguments 6416
#define OpcUaId_OpcUaDi_XmlSchema 6423
#define OpcUaId_OpcUaDi_XmlSchema_NamespaceUri 6425
#define OpcUaId_OpcUaDi_XmlSchema_TransferStatusType 6426
#define OpcUaId_OpcUaDi_XmlSchema_TransferResult 6429
#define OpcUaId_OpcUaDi_XmlSchema_ParameterResult 6444
#define OpcUaId_OpcUaDi_BinarySchema 6435
#define OpcUaId_OpcUaDi_BinarySchema_NamespaceUri 6437
#define OpcUaId_OpcUaDi_BinarySchema_TransferStatusType 6438
#define OpcUaId_OpcUaDi_BinarySchema_TransferResult 6441
#define OpcUaId_OpcUaDi_BinarySchema_ParameterResult 6447

/*============================================================================
* VariableType Identifiers
 *===========================================================================*/
#define OpcUaId_UIElementType 6246

#endif /* _OpcUaDi_Identifiers_H_ */
/* This is the last line of an autogenerated file. */
