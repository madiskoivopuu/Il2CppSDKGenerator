#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkillEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkillEventHandler"));
	}


	template <typename T = void> T OnHold(SkillSlot* item) {
		return ((T (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnRelease(SkillSlot* item) {
		return ((T (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T OnSelect(SkillSlot* item) {
		return ((T (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}

};

