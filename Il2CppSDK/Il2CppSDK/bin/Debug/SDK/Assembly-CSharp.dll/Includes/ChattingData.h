#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChattingData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChattingData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Chatting() {
		return *(R*)((uintptr_t)this + 0x4);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChattingData*, uintptr_t))(Il2CppBase() + 0x173CC98))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChattingData*, uintptr_t))(Il2CppBase() + 0x173CCEC))(this, reader);
	}

};
