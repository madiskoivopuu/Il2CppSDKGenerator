#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class NewsContext : public BaseReplicatedContext1<NewsEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = NewsEntity*> R GetEntityWithId(int32_t id) {
		return ((R (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE33C))(this, id);
	}
	template <typename R = NewsEntity*> R get_Item(int32_t id) {
		return ((R (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE418))(this, id);
	}
	template <typename R = NewsEntity*> R CreateEntityWithId(int32_t id) {
		return ((R (*)(NewsContext*, int32_t))(Il2CppBase() + 0x13AE454))(this, id);
	}
	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(NewsContext*))(Il2CppBase() + 0x13AE5CC))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(NewsContext*))(Il2CppBase() + 0x13AE5D4))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(NewsContext*))(Il2CppBase() + 0x13AE5DC))(this);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(NewsContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AE5E4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(NewsContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AE6E8))(this, reader, entity);
	}

};

