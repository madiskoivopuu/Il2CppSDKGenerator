#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class NewsContext : public BaseReplicatedContext1<NewsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = NewsEntity*> T GetEntityWithId(int32_t id) {
		return ((T (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE33C))(this, id);
	}
	template <typename T = NewsEntity*> T get_Item(int32_t id) {
		return ((T (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE418))(this, id);
	}
	template <typename T = NewsEntity*> T CreateEntityWithId(int32_t id) {
		return ((T (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE454))(this, id);
	}
	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(NewsContext*))(Il2CppBase() + 0x13AE5CC))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(NewsContext*))(Il2CppBase() + 0x13AE5D4))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(NewsContext*))(Il2CppBase() + 0x13AE5DC))(this);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(NewsContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AE5E4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(NewsContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AE6E8))(this, reader, entity);
	}

};

