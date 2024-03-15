#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointLabelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointLabelEntity"));
	}


	template <typename R = PointLabelComponent*> R get_pointLabel() {
		return ((R (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPointLabel() {
		return ((R (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPointLabel(Il2CppString* newCondition) {
		return ((R (*)(IPointLabelEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCondition);
	}
	template <typename R = void> R ReplacePointLabel(Il2CppString* newCondition) {
		return ((R (*)(IPointLabelEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCondition);
	}
	template <typename R = void> R RemovePointLabel() {
		return ((R (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

