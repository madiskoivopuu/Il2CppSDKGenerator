#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseLoaderStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseLoaderStep"));
	}

	template <typename R = int32_t> R& _stepIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& _stepCount() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& _progress() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _fakeStepTime() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& _startTime() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _repeatCount() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> R& _maxRepeatCount() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _reconnectTimeout() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = AppController*> R& _appController() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = LoadingProgressBar*> R& _progressBar() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GameLoader*> R& _loader() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = ClientAnalyticsManager*> R& _analytics() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppString*> R& _locationName() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _defaultAdditiveProgressText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& AnalyticsStepName() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = Il2CppString*> R& StepName() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = bool> R& IsStepCompleted() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	 Action3int32_t, int32_t, float>*& OnProgressChanged() {
		return *(Action3int32_t, int32_t, float>**)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& OnStepCompleted() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = Il2CppString*> R get_AnalyticsStepName() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166DFF8))(this);
	}
	template <typename R = void> R set_AnalyticsStepName(Il2CppString* value) {
		return ((R (*)(BaseLoaderStep*, Il2CppString*))(Il2CppBase() + 0x166E000))(this, value);
	}
	template <typename R = Il2CppString*> R get_StepName() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E008))(this);
	}
	template <typename R = void> R set_StepName(Il2CppString* value) {
		return ((R (*)(BaseLoaderStep*, Il2CppString*))(Il2CppBase() + 0x166E010))(this, value);
	}
	template <typename R = float> R get_Progress() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E018))(this);
	}
	template <typename R = void> R set_Progress(float value) {
		return ((R (*)(BaseLoaderStep*, float))(Il2CppBase() + 0x166E020))(this, value);
	}
	template <typename R = bool> R get_IsStepCompleted() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E0A4))(this);
	}
	template <typename R = void> R set_IsStepCompleted(bool value) {
		return ((R (*)(BaseLoaderStep*, bool))(Il2CppBase() + 0x166E0AC))(this, value);
	}
	template <typename R = void> R add_OnProgressChanged(Action3int32_t, int32_t, float>* value) {
		return ((R (*)(BaseLoaderStep*, Action3int32_t, int32_t, float>*))(Il2CppBase() + 0x166E0B8))(this, value);
	}
	template <typename R = void> R remove_OnProgressChanged(Action3int32_t, int32_t, float>* value) {
		return ((R (*)(BaseLoaderStep*, Action3int32_t, int32_t, float>*))(Il2CppBase() + 0x166E158))(this, value);
	}
	template <typename R = void> R InitProgressBar() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E3E0))(this);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Disable() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E804))(this);
	}
	template <typename R = void> R StartLoadingFromStep() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R RepeatOrReconnect() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E808))(this);
	}
	template <typename R = uintptr_t> R Repeat() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E880))(this);
	}
	template <typename R = uintptr_t> R Reconnect() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E8F8))(this);
	}
	template <typename R = void> R CloseAnyWindows() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166E970))(this);
	}
	template <typename R = uintptr_t> R FakeProgress(float time) {
		return ((R (*)(BaseLoaderStep*, float))(Il2CppBase() + 0x166EC3C))(this, time);
	}
	template <typename R = uintptr_t> R WaitForRepeat(float delay, uintptr_t action, Il2CppString* delayStringKey) {
		return ((R (*)(BaseLoaderStep*, float, uintptr_t, Il2CppString*))(Il2CppBase() + 0x166ECC4))(this, delay, action, delayStringKey);
	}
	template <typename R = void> R ShowOopsWindow(Action1int32_t>* onClose) {
		return ((R (*)(BaseLoaderStep*, Action1int32_t>*))(Il2CppBase() + 0x166ED7C))(this, onClose);
	}
	template <typename R = void> R _ctorb__36_0() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166F250))(this);
	}
	template <typename R = void> R InitProgressBarb__37_0(int32_t _stepIndex, int32_t _stepCount, float _progress) {
		return ((R (*)(BaseLoaderStep*, int32_t, int32_t, float))(Il2CppBase() + 0x166F358))(this, _stepIndex, _stepCount, _progress);
	}
	template <typename R = void> R Reconnectb__43_0() {
		return ((R (*)(BaseLoaderStep*))(Il2CppBase() + 0x166F374))(this);
	}

};

