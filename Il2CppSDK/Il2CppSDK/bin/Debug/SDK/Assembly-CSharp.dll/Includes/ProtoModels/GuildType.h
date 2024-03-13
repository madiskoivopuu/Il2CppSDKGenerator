#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GuildType*> static T& GtNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildType*> static T& GtPrivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildType*> static T& GtPublic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildType*> static T& GtByApplication() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
