#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProgressEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProgressEntity"));
	}


	template <typename T = ProgressComponent*> T get_progress() {
		return ((T (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasProgress() {
		return ((T (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddProgress(int32_t newValue) {
		return ((T (*)(IProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceProgress(int32_t newValue) {
		return ((T (*)(IProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveProgress() {
		return ((T (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}

};

