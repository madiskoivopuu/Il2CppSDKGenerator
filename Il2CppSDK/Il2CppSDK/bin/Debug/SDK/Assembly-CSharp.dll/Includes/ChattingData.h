#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChattingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChattingData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& Chatting() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChattingData*, uintptr_t))(Il2CppBase() + 0x173CC98))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChattingData*, uintptr_t))(Il2CppBase() + 0x173CCEC))(this, reader);
	}

};

