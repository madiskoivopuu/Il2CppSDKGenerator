#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CorpseDestructionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CorpseDestructionComponent"));
	}

	template <typename R = Il2CppArray<LevelTime>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CorpseDestructionComponent*, Il2CppObject*))(Il2CppBase() + 0x133E828))(this, targetObject);
	}
	template <typename R = float> R GetTime(int32_t level) {
		return ((R (*)(CorpseDestructionComponent*, int32_t))(Il2CppBase() + 0x133E8C0))(this, level);
	}

};

