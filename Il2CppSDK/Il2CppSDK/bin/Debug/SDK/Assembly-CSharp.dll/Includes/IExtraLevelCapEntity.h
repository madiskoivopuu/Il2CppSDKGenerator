#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExtraLevelCapEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExtraLevelCapEntity"));
	}


	template <typename T = ExtraLevelCapComponent*> T get_extraLevelCap() {
		return ((T (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(IExtraLevelCapEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(IExtraLevelCapEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(IExtraLevelCapEntity*))(Il2CppBase() + 0x0))(this);
	}

};

