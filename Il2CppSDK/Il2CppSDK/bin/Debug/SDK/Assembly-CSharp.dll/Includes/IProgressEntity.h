#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IProgressEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IProgressEntity"));
	}


	template <typename R = ProgressComponent*> R get_progress() {
		return ((R (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasProgress() {
		return ((R (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddProgress(int32_t newValue) {
		return ((R (*)(IProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceProgress(int32_t newValue) {
		return ((R (*)(IProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveProgress() {
		return ((R (*)(IProgressEntity*))(Il2CppBase() + 0x0))(this);
	}

};

