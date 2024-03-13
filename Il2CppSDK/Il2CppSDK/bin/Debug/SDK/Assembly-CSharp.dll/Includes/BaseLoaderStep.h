#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseLoaderStep"));
	}

	template <typename T = int32_t> T& _stepIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _stepCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _fakeStepTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _repeatCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _maxRepeatCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _reconnectTimeout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = AppController*> T& _appController() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = LoadingProgressBar*> T& _progressBar() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = GameLoader*> T& _loader() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ICommonLogger*> T& _logger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = ClientAnalyticsManager*> T& _analytics() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = UIWindowsManager*> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& _locationName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _defaultAdditiveProgressText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& AnalyticsStepName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& StepName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IsStepCompleted() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Action3int32_t, int32_t, float>*> T& OnProgressChanged() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OnStepCompleted() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = Il2CppString*> T get_AnalyticsStepName() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166DFF8))(this);
	}
	template <typename T = void> T set_AnalyticsStepName(Il2CppString* value) {
		return ((T (*)(BaseLoaderStep*, Il2CppString*))(Il2CppBase() + 0x166E000))(this, value);
	}
	template <typename T = Il2CppString*> T get_StepName() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E008))(this);
	}
	template <typename T = void> T set_StepName(Il2CppString* value) {
		return ((T (*)(BaseLoaderStep*, Il2CppString*))(Il2CppBase() + 0x166E010))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E018))(this);
	}
	template <typename T = void> T set_Progress(float value) {
		return ((T (*)(BaseLoaderStep*, float))(Il2CppBase() + 0x166E020))(this, value);
	}
	template <typename T = bool> T get_IsStepCompleted() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E0A4))(this);
	}
	template <typename T = void> T set_IsStepCompleted(bool value) {
		return ((T (*)(BaseLoaderStep*, bool))(Il2CppBase() + 0x166E0AC))(this, value);
	}
	template <typename T = void> T add_OnProgressChanged(Action3int32_t, int32_t, float>* value) {
		return ((T (*)(BaseLoaderStep*, Action3int32_t, int32_t, float>*))(Il2CppBase() + 0x166E0B8))(this, value);
	}
	template <typename T = void> T remove_OnProgressChanged(Action3int32_t, int32_t, float>* value) {
		return ((T (*)(BaseLoaderStep*, Action3int32_t, int32_t, float>*))(Il2CppBase() + 0x166E158))(this, value);
	}
	template <typename T = void> T InitProgressBar() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E3E0))(this);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E804))(this);
	}
	template <typename T = void> T StartLoadingFromStep() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T RepeatOrReconnect() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E808))(this);
	}
	template <typename T = uintptr_t> T Repeat() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E880))(this);
	}
	template <typename T = uintptr_t> T Reconnect() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E8F8))(this);
	}
	template <typename T = void> T CloseAnyWindows() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E970))(this);
	}
	template <typename T = uintptr_t> T FakeProgress(float time) {
		return ((T (*)(BaseLoaderStep*, float))(Il2CppBase() + 0x166EC3C))(this, time);
	}
	template <typename T = uintptr_t> T WaitForRepeat(float delay, uintptr_t action, Il2CppString* delayStringKey) {
		return ((T (*)(BaseLoaderStep*, float, uintptr_t, Il2CppString*))(Il2CppBase() + 0x166ECC4))(this, delay, action, delayStringKey);
	}
	template <typename T = void> T ShowOopsWindow(Action1int32_t>* onClose) {
		return ((T (*)(BaseLoaderStep*, Action1int32_t>*))(Il2CppBase() + 0x166ED7C))(this, onClose);
	}
	template <typename T = void> T _ctorb__36_0() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166F250))(this);
	}
	template <typename T = void> T InitProgressBarb__37_0(int32_t _stepIndex, int32_t _stepCount, float _progress) {
		return ((T (*)(BaseLoaderStep*, int32_t, int32_t, float))(Il2CppBase() + 0x166F358))(this, _stepIndex, _stepCount, _progress);
	}
	template <typename T = void> T Reconnectb__43_0() {
		return ((T (*)(BaseLoaderStep*))(Il2CppBase() + 0x166F374))(this);
	}

};

