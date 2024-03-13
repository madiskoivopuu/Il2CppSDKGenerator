#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RequestType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RequestType"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RequestType*> static T& Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RequestType*> static T& Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RequestType*> static T& StealAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RequestType*> static T& StealReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RequestType*> static T& StealResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RequestType*> static T& Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

