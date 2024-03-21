#pragma once

#include "../mscorlib/System/ValueType.h"
#include "FindUserForInviteTarget.h"


class FindUserForInviteData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FindUserForInviteData"));
	}

	Il2CppString*& UserName() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

	FindUserForInviteTarget& Target() {
		return *(FindUserForInviteTarget*)((uintptr_t)this + 0x8);
	}

};};
