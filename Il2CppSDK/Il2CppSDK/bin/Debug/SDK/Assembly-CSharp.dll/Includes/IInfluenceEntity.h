#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInfluenceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInfluenceEntity"));
	}


	template <typename T = InfluenceComponent*> T get_influence() {
		return ((T (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(IInfluenceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(IInfluenceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

