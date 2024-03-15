#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendMoveToWorldData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SendMoveToWorldData"));
	}

	template <typename R = Il2CppString*> R& Coordinator() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& ToLocationName() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SendMoveToWorldData*, uintptr_t))(Il2CppBase() + 0x1364650))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SendMoveToWorldData*, uintptr_t))(Il2CppBase() + 0x13646A4))(this, reader);
	}

};

