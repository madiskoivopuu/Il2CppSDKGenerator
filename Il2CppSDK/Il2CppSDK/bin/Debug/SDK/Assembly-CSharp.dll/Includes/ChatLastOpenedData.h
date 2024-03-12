#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatLastOpenedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatLastOpenedData"));
	}

	template <typename T = Il2CppString*> T& RoomType() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChatLastOpenedData*, uintptr_t))(Il2CppBase() + 0x13F9CFC))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChatLastOpenedData*, uintptr_t))(Il2CppBase() + 0x13F9D40))(this, reader);
	}

};

}
