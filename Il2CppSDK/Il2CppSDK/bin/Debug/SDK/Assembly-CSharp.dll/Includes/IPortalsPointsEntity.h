#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalsPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalsPointsEntity"));
	}


	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(IPortalsPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(IPortalsPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(IPortalsPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

