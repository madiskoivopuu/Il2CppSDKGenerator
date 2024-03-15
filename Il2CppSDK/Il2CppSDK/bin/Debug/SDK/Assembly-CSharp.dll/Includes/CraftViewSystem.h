#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftViewSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<GameEntity*>*& _craft() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 IGroup1<GameEntity*>*& _finalize() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x20);
	}
	 IGroup1<GameEntity*>*& _fusion() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x28);
	}
	 IGroup1<GameEntity*>*& _extractor() {
		return *(IGroup1<GameEntity*>**)((uintptr_t)this + 0x30);
	}
	 Il2CppDictionary<int32_t, LoopSoundContainer*>*& _working() {
		return *(Il2CppDictionary<int32_t, LoopSoundContainer*>**)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(CraftViewSystem*))(Il2CppBase() + 0x1344800))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(CraftViewSystem*))(Il2CppBase() + 0x1344900))(this);
	}
	template <typename R = bool> R IsActiveCraft(GameEntity* entity, int64_t now) {
		return ((R (*)(CraftViewSystem*, GameEntity*, int64_t))(Il2CppBase() + 0x1345FF8))(this, entity, now);
	}
	template <typename R = void> R Cleanup() {
		return ((R (*)(CraftViewSystem*))(Il2CppBase() + 0x1346060))(this);
	}

};

