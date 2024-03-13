#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildQuestState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildQuestState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GuildQuestState*> static T& GqsNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildQuestState*> static T& GqsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildQuestState*> static T& GqsDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildQuestState*> static T& GqsFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
