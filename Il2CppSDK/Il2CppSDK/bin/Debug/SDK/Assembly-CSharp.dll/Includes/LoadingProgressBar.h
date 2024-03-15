#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingProgressBar"));
	}

	template <typename R = uintptr_t> R& _progressBar() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _stateText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _additiveText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _startTime() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& _progressOnStep() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& _isFake() {
		return *(R*)((uintptr_t)this + 0x41);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(LoadingProgressBar*))(Il2CppBase() + 0x1432FD4))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(LoadingProgressBar*))(Il2CppBase() + 0x1432FFC))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(LoadingProgressBar*))(Il2CppBase() + 0x143301C))(this);
	}
	template <typename R = void> R SetIsFake() {
		return ((R (*)(LoadingProgressBar*))(Il2CppBase() + 0x1433088))(this);
	}
	template <typename R = void> R UpdateProgress(int32_t currentStep, int32_t stepCount, float progress) {
		return ((R (*)(LoadingProgressBar*, int32_t, int32_t, float))(Il2CppBase() + 0x1433094))(this, currentStep, stepCount, progress);
	}
	template <typename R = void> R SetStepName(Il2CppString* stepName, Il2CppArray<Il2CppObject*>* args) {
		return ((R (*)(LoadingProgressBar*, Il2CppString*, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0x1433228))(this, stepName, args);
	}
	template <typename R = void> R SetStepAdditiveText(Il2CppString* text, bool localized, Il2CppArray<Il2CppObject*>* args) {
		return ((R (*)(LoadingProgressBar*, Il2CppString*, bool, Il2CppArray<Il2CppObject*>*))(Il2CppBase() + 0x1433324))(this, text, localized, args);
	}

};

