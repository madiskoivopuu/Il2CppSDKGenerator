#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalsPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalsPointsEntity"));
	}


	template <typename T = PortalsPointsComponent*> T get_portalsPoints() {
		return ((T (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(IPortalsPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(IPortalsPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

