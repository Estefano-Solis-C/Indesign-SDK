/************************************************************************
 Copyright 2022 Adobe
 All Rights Reserved.
 NOTICE: Adobe permits you to use, modify, and distribute this file in accordance with the terms of the Adobe license agreement accompanying it.
*************************************************************************
*/

#ifndef __CLOUDDOCSID__
#define __CLOUDDOCSID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kCloudDocsPrefix RezLong(0x24100) // see AdobePrefix.h

#define kCloudDocsPluginName "Cloud Docs"

//Plugin
DECLARE_PMID(kPlugInIDSpace, kCloudDocsPluginID, kCloudDocsPrefix + 1)

// Class ID
DECLARE_PMID(kClassIDSpace, kCloudDocsComponentManagerBoss, kCloudDocsPrefix + 1)
DECLARE_PMID(kClassIDSpace, kCloudDocsStartupShutdownBoss, kCloudDocsPrefix + 2)
DECLARE_PMID(kClassIDSpace, kCloudDBStreamReadBoss, kCloudDocsPrefix + 3)
DECLARE_PMID(kClassIDSpace, kCloudDBStreamWriteBoss, kCloudDocsPrefix + 4)
DECLARE_PMID(kClassIDSpace, kCloudDBStreamCopyBoss, kCloudDocsPrefix + 5)
DECLARE_PMID(kClassIDSpace, kCompositeConversionServiceProviderBoss, kCloudDocsPrefix + 6)
DECLARE_PMID(kClassIDSpace, kCustomCloudDBStreamWriteBoss, kCloudDocsPrefix + 7)
DECLARE_PMID(kClassIDSpace, kSetCloudDocsPrefsCmdBoss, kCloudDocsPrefix + 8)
DECLARE_PMID(kClassIDSpace, kAddRecentCloudFileCmdBoss, kCloudDocsPrefix + 9)
DECLARE_PMID(kClassIDSpace, kRemoveRecentCloudFileCmdBoss, kCloudDocsPrefix + 10)
DECLARE_PMID(kClassIDSpace, kCloudDocAutoSaveIdleTaskHandlerBoss, kCloudDocsPrefix + 11)
DECLARE_PMID(kClassIDSpace, kSetCloudDocLinkedAssetPrefsCmdBoss, kCloudDocsPrefix + 12)
DECLARE_PMID(kClassIDSpace, kCloudDocCloseObserverBoss, kCloudDocsPrefix + 13)
DECLARE_PMID(kClassIDSpace, kAutoSaveIAMDocChangeObserverBoss, kCloudDocsPrefix + 14)

DECLARE_PMID(kClassIDSpace, kCloudSnapshotDBStreamWriteBoss, kCloudDocsPrefix + 15)
DECLARE_PMID(kClassIDSpace, kCloudDBSkipPubFileSharingShieldStreamReadBoss, kCloudDocsPrefix + 16)
DECLARE_PMID(kClassIDSpace, kCloudDBStreamWrite_AllowPubFileWriteBoss, kCloudDocsPrefix + 17)
DECLARE_PMID(kClassIDSpace, kDCXCompositeStreamReadBoss, kCloudDocsPrefix + 18)
DECLARE_PMID(kClassIDSpace, kCollaborationICMLExportBoss, kCloudDocsPrefix + 19)
DECLARE_PMID(kClassIDSpace, kLogAnalyticsIdleTaskHandlerBoss, kCloudDocsPrefix + 20)
DECLARE_PMID(kClassIDSpace, kDiscardInCopyDataResponderBoss, kCloudDocsPrefix+21)
DECLARE_PMID(kClassIDSpace, kSamInitStatusIdleTaskHandlerBoss, kCloudDocsPrefix + 22)
DECLARE_PMID(kClassIDSpace, kSetUserGuidCmdBoss, kCloudDocsPrefix + 23)
DECLARE_PMID(kClassIDSpace, kCloudInternalScriptMethodHandlerBoss, kCloudDocsPrefix + 24)




// Interfaces
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSCOMPONENTMANAGER, kCloudDocsPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSMANAGER, kCloudDocsPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IIDDCXUTILS, kCloudDocsPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_IBUFFERMANAGERUTILS, kCloudDocsPrefix + 4)
DECLARE_PMID(kInterfaceIDSpace, IID_ISAMCLOUDMANAGER, kCloudDocsPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_ISAMCLOUDUTILS, kCloudDocsPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOMPOSITECONVERSIONPROVIDER, kCloudDocsPrefix + 7)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOMPOSITEPRECONVERSIONPROVIDER, kCloudDocsPrefix + 8)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOMPOSITEPOSTCONVERSIONPROVIDER, kCloudDocsPrefix + 9)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOMPOSITECONVERSIONMANAGER, kCloudDocsPrefix + 10)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSPREFS, kCloudDocsPrefix + 11)
DECLARE_PMID(kInterfaceIDSpace, IID_IAUTOSAVEIDLETASKMANAGER, kCloudDocsPrefix + 12)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSLOGGER, kCloudDocsPrefix + 13)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSLOGGINGUTILS, kCloudDocsPrefix + 14)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDRECENTSFILELIST, kCloudDocsPrefix + 15)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDRECENTFILELISTFACADE, kCloudDocsPrefix + 16)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCLINKEDASSETPREFS, kCloudDocsPrefix + 17)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDRECENTSFILETHUMBANAILDATA, kCloudDocsPrefix + 18)
DECLARE_PMID(kInterfaceIDSpace, IID_IDCXCOMPOSITESTREAMDATA, kCloudDocsPrefix + 19)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOLLABORATIONUTILS, kCloudDocsPrefix + 20)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOLLABORATIONICMLEXPORTSUITE, kCloudDocsPrefix + 21)
DECLARE_PMID(kInterfaceIDSpace, IID_IUIDTOEXPORTASICML, kCloudDocsPrefix + 22)
DECLARE_PMID(kInterfaceIDSpace, IID_IBOOLDATAEXPORTALL, kCloudDocsPrefix + 23)
DECLARE_PMID(kInterfaceIDSpace, IID_ICLOUDDOCSPUBLICUTILS, kCloudDocsPrefix + 24)
DECLARE_PMID(kInterfaceIDSpace, IID_CLOUDDOCINREVERTEDSTATE, kCloudDocsPrefix + 25)
DECLARE_PMID(kInterfaceIDSpace, IID_ISAMINITSTATUSIDLETASKMANAGER, kCloudDocsPrefix + 26)
DECLARE_PMID(kInterfaceIDSpace, IID_IUSERGUID, kCloudDocsPrefix + 27)



// Implementation
DECLARE_PMID(kImplementationIDSpace, kCloudDocsComponentManagerImpl, kCloudDocsPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsStartupShutDownImpl, kCloudDocsPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsManagerImpl, kCloudDocsPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kIDDcxUtils, kCloudDocsPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kBufferManagerUtilsImpl, kCloudDocsPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kCloudDocImpl, kCloudDocsPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kCloudDBStreamWriteImpl, kCloudDocsPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kCloudDBStreamReadImpl, kCloudDocsPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kCloudDBStreamCopyImpl, kCloudDocsPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsUtilsImpl, kCloudDocsPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kCloudRIDXWriteStreamObserverImpl, kCloudDocsPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kCompositeConversionServiceImpl, kCloudDocsPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kCompositeConversionProviderImpl, kCloudDocsPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kCompositePreConversionProviderImpl, kCloudDocsPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kCompositePostConversionProviderImpl, kCloudDocsPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kCompositeConversionManagerImpl, kCloudDocsPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsPrefsImpl, kCloudDocsPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kSetCloudDocsPrefsCmdImpl, kCloudDocsPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kPersistCloudRecentsFileListImpl, kCloudDocsPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kAddRecentCloudFileCmdImpl, kCloudDocsPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kCloudRecentFileThumnailDataImpl, kCloudDocsPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kRemoveRecentCloudFileCmdImpl, kCloudDocsPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kClodRecentFileListFacadeImpl, kCloudDocsPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kDoAutoSaveIdleTaskImpl, kCloudDocsPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kAutoSaveIdleTaskManagerImpl, kCloudDocsPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsLoggerImpl, kCloudDocsPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsLoggingUtilsImpl, kCloudDocsPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kCloudDocLinkedAssetPrefsImpl, kCloudDocsPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kSetCloudDocLinkedAssetPrefsCmdImpl, kCloudDocsPrefix + 29)
DECLARE_PMID(kImplementationIDSpace, kCloudDocCloseObserverImpl, kCloudDocsPrefix + 30)
DECLARE_PMID(kImplementationIDSpace, kDCXCompositeStreamReadImpl, kCloudDocsPrefix + 31)
DECLARE_PMID(kImplementationIDSpace, kDCXCompositeStreamDataImpl, kCloudDocsPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kAutoSaveIAMDocChangeObserverImpl, kCloudDocsPrefix + 33)

DECLARE_PMID(kImplementationIDSpace, kCloudSnapshotDBStreamWriteImpl, kCloudDocsPrefix + 34)
DECLARE_PMID(kImplementationIDSpace, kCloudDBSkipPubFileSharingShieldStreamReadImpl, kCloudDocsPrefix + 35)
DECLARE_PMID(kImplementationIDSpace, kCloudDBStreamWrite_AllowPubFileWriteImpl, kCloudDocsPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kCollaborationUtilsImpl, kCloudDocsPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kCollaborationICMLExportSuiteImpl, kCloudDocsPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kLogAnalyticsIdleTaskImpl, kCloudDocsPrefix + 39)
DECLARE_PMID(kImplementationIDSpace, kDiscardInCopyDataResponderImpl, kCloudDocsPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kDiscardInCopyDataServiceImpl, kCloudDocsPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kCloudDocsPublicUtilsImpl, kCloudDocsPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kCloudDocInRevertedStateImpl, kCloudDocsPrefix+43)
DECLARE_PMID(kImplementationIDSpace, kSamInitStatusIdleTaskManagerImpl, kCloudDocsPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kCheckSamInitStatusIdleTaskImpl, kCloudDocsPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kUserGuidPersistImpl, kCloudDocsPrefix+46)
DECLARE_PMID(kImplementationIDSpace, kSetUserGuidCmdImpl, kCloudDocsPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kCloudInternalScriptMethodHandlerImpl, kCloudDocsPrefix + 48)

// Conversion Service. 
DECLARE_PMID(kServiceIDSpace, kCompositeConversionService, kCloudDocsPrefix + 1)

DECLARE_PMID(kActionIDSpace, kLinksAlertMsgActionID, kCloudDocsPrefix + 40) // used as id for dont show again alert 

DECLARE_PMID(kErrorIDSpace, kCompositeCreationFailureError				,kCloudDocsPrefix + 1)
DECLARE_PMID(kErrorIDSpace, kApiNotYetImplementedError                ,kCloudDocsPrefix + 2)
#endif
