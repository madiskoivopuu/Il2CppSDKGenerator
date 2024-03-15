#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatLastOpenedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatLastOpenedData"));
	}

	template <typename R = Il2CppString*> R& RoomType() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChatLastOpenedData*, uintptr_t))(Il2CppBase() + 0x13F9CFC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChatLastOpenedData*, uintptr_t))(Il2CppBase() + 0x13F9D40))(this, reader);
	}

};

