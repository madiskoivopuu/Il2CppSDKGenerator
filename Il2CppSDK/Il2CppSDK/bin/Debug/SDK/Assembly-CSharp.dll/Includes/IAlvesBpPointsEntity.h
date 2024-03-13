#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesBpPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesBpPointsEntity"));
	}


	template <typename T = AlvesBpPointsComponent*> T get_alvesBpPoints() {
		return ((T (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(IAlvesBpPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(IAlvesBpPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

