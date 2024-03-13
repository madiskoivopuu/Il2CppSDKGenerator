#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVIPPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVIPPointsEntity"));
	}


	template <typename T = VIPPointsComponent*> T get_vIPPoints() {
		return ((T (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(IVIPPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(IVIPPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(IVIPPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

