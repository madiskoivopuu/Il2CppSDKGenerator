#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass530
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass53_0"));
	}

	template <typename R = ChatRoom*> R& room() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R UpdateRoomsb__1(ChatChannelData* d) {
		return ((R (*)(cDisplayClass530*, ChatChannelData*))(Il2CppBase() + 0x1119A70))(this, d);
	}

};

