#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoaderStepParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoaderStepParams"));
	}

	template <typename T = GameLoader*> T& Loader() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = LoadingProgressBar*> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = ICommonLogger*> T& Logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ClientAnalyticsManager*> T& Analytics() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = PlatformManager*> T& PlatformManager() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = UIWindowsManager*> T& WindowsManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ClientDataContexts*> T& _dataContexts() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ClientSharedContexts*> T& _sharedContexts() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

