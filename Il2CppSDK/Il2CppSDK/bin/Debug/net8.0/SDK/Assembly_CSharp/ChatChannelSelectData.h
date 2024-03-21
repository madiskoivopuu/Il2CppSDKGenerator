#pragma once

#include "../mscorlib/System/ValueType.h"


class ChatChannelSelectData : public ValueType {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatChannelSelectData"));
	}

	Il2CppString*& ChannelType() {
		return *(Il2CppString**)((uintptr_t)this + 0x0);
	}

};};
