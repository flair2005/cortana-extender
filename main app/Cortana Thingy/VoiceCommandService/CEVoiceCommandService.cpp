﻿#include "pch.h"
#include "CEVoiceCommandService.h"

using namespace VoiceCommandService;
using namespace Platform;
using namespace Windows::ApplicationModel::Background;

CEVoiceCommandService::CEVoiceCommandService()
{

}

void VoiceCommandService::CEVoiceCommandService::Run(IBackgroundTaskInstance ^ taskInstance)
{
	throw ref new Platform::NotImplementedException();
}
