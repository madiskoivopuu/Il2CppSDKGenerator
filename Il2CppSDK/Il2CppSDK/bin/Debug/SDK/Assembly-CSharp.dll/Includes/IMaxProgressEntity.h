#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxProgressEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxProgressEntity"));
	}


	template <typename R = MaxProgressComponent*> R get_maxProgress() {
		return ((R (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxProgress() {
		return ((R (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxProgress(int32_t newValue) {
		return ((R (*)(IMaxProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxProgress(int32_t newValue) {
		return ((R (*)(IMaxProgressEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMaxProgress() {
		return ((R (*)(IMaxProgressEntity*))(Il2CppBase() + 0x0))(this);
	}

};

