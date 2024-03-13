#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ChatMessageParamType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ChatMessageParamType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ChatMessageParamType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ChatMessageParamType*> static T& String() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ChatMessageParamType*> static T& Timer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ChatMessageParamType*> static T& StringWithParameters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
