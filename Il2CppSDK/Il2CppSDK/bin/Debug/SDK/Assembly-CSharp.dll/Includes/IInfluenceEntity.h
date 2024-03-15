#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInfluenceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInfluenceEntity"));
	}


	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(IInfluenceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(IInfluenceEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(IInfluenceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

