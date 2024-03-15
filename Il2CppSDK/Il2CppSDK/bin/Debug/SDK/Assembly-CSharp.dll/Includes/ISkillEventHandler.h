#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISkillEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkillEventHandler"));
	}


	template <typename R = void> R OnHold(SkillSlot* item) {
		return ((R (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnRelease(SkillSlot* item) {
		return ((R (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R OnSelect(SkillSlot* item) {
		return ((R (*)(ISkillEventHandler*, SkillSlot*))(Il2CppBase() + 0x0))(this, item);
	}

};

