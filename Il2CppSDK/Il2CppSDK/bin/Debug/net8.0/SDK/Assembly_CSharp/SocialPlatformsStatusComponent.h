#pragma once

#include "../mscorlib/System/Object.h"


class SocialPlatformsStatusComponent : public Il2CppObject {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SocialPlatformsStatusComponent"));
	}

	bool& IsGooglePlayConnected() {
		return *(bool*)((uintptr_t)this + 0x10);
	}

	bool& IsGamecenterConnected() {
		return *(bool*)((uintptr_t)this + 0x11);
	}

};};
