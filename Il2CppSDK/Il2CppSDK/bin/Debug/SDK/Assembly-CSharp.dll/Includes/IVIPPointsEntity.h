#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVIPPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVIPPointsEntity"));
	}


	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(IVIPPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(IVIPPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

