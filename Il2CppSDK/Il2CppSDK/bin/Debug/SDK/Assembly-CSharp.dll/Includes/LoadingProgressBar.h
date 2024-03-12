#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingProgressBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingProgressBar"));
	}

	template <typename T = uintptr_t> T& _progressBar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _stateText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _additiveText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& _progressOnStep() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isFake() {
		return *(T*)((uintptr_t)this + 0x41);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x1432FD4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x1432FFC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x143301C))(this);
	}
	template <typename T = void> T SetIsFake() {
		return ((T (*)(LoadingProgressBar*))(Il2CppBase() + 0x1433088))(this);
	}
	template <typename T = void> T UpdateProgress(int32_t currentStep, int32_t stepCount, float progress) {
		return ((T (*)(LoadingProgressBar*, int32_t, int32_t, float))(Il2CppBase() + 0x1433094))(this, currentStep, stepCount, progress);
	}
	template <typename T = void> T SetStepName(Il2CppString* stepName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(LoadingProgressBar*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1433228))(this, stepName, args);
	}
	template <typename T = void> T SetStepAdditiveText(Il2CppString* text, bool localized, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(LoadingProgressBar*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1433324))(this, text, localized, args);
	}

};

}
