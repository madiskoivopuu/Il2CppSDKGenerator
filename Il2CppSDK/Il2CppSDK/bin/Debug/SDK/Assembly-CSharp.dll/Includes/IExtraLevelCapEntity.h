#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExtraLevelCapEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExtraLevelCapEntity"));
	}


	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(IExtraLevelCapEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(IExtraLevelCapEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}

};

