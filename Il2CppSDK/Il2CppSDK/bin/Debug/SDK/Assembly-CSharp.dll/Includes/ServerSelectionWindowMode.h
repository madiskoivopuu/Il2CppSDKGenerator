#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerSelectionWindowMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerSelectionWindowMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ServerSelectionWindowMode*> static T& Standart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServerSelectionWindowMode*> static T& OnError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

