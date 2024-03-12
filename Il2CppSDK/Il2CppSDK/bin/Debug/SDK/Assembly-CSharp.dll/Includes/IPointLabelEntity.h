#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointLabelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointLabelEntity"));
	}


	template <typename T = uintptr_t> T get_pointLabel() {
		return ((T (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPointLabel() {
		return ((T (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPointLabel(Il2CppString* newCondition) {
		return ((T (*)(IPointLabelEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCondition);
	}
	template <typename T = void> T ReplacePointLabel(Il2CppString* newCondition) {
		return ((T (*)(IPointLabelEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCondition);
	}
	template <typename T = void> T RemovePointLabel() {
		return ((T (*)(IPointLabelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
