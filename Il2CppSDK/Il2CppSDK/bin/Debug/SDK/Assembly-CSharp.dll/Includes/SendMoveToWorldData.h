#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendMoveToWorldData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendMoveToWorldData"));
	}

	template <typename T = Il2CppString*> T& Coordinator() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ToLocationName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SendMoveToWorldData*, uintptr_t))(Il2CppBase() + 0x1364650))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SendMoveToWorldData*, uintptr_t))(Il2CppBase() + 0x13646A4))(this, reader);
	}

};

