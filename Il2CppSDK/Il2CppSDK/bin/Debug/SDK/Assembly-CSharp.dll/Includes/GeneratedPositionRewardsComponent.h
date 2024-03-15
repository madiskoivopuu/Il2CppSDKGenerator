#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GeneratedPositionRewardsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GeneratedPositionRewardsComponent"));
	}

	 Il2CppDictionary<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>*& Datas() {
		return *(Il2CppDictionary<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(GeneratedPositionRewardsComponent*, Il2CppObject*))(Il2CppBase() + 0x176EFF8))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F090))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F4D4))(this, writer);
	}
	template <typename R = void> R writeData(uintptr_t writer, KeyValuePair2<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>* kvp) {
		return ((R (*)(GeneratedPositionRewardsComponent*, uintptr_t, KeyValuePair2<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>*))(Il2CppBase() + 0x176F644))(this, writer, kvp);
	}
	 ValueTuple2<Il2CppString*, KeyValuePair2<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>*>* readData(uintptr_t reader) {
		return ((ValueTuple2<Il2CppString*, KeyValuePair2<int32_t, Il2CppArray<Tuple2<Il2CppString*, int32_t>*>*>*>* (*)(GeneratedPositionRewardsComponent*, uintptr_t))(Il2CppBase() + 0x176F20C))(this, reader);
	}

};

