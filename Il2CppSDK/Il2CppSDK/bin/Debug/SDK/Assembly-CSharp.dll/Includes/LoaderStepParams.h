#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoaderStepParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoaderStepParams"));
	}

	template <typename R = GameLoader*> R& Loader() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = LoadingProgressBar*> R& ProgressBar() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& Logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ClientAnalyticsManager*> R& Analytics() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = PlatformManager*> R& PlatformManager() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = UIWindowsManager*> R& WindowsManager() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ClientDataContexts*> R& _dataContexts() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ClientSharedContexts*> R& _sharedContexts() {
		return *(R*)((uintptr_t)this + 0x48);
	}


};

