#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewCoverSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewCoverSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1GameEntity*>*& _targets() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 IGroup1GameEntity*>*& _covers() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> static R& COVER_SINGLE_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ViewCoverSystem*))(Il2CppBase() + 0x15C8338))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ViewCoverSystem*))(Il2CppBase() + 0x15C85D4))(this);
	}

};

