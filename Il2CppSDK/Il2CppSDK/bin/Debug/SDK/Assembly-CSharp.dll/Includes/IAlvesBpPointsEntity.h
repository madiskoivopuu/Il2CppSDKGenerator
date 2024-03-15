#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAlvesBpPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAlvesBpPointsEntity"));
	}


	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(IAlvesBpPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(IAlvesBpPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(IAlvesBpPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

