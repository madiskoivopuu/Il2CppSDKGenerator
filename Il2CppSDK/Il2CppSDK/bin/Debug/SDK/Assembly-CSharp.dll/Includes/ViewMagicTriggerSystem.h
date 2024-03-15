#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewMagicTriggerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewMagicTriggerSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<MagicTriggerEntity*>*& _triggers() {
		return *(IGroup1<MagicTriggerEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ViewMagicTriggerSystem*))(Il2CppBase() + 0x15CC4AC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ViewMagicTriggerSystem*))(Il2CppBase() + 0x15CC528))(this);
	}

};

