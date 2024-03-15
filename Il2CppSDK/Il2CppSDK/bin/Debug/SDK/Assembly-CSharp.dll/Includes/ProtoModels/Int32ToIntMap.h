#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Int32ToIntMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Int32ToIntMap"));
	}

	 static MessageParser1<ProtoModels::Int32ToIntMap*>*& _parser() {
		return *(MessageParser1<ProtoModels::Int32ToIntMap*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& InnerMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int32_t, int32_t>*& _map_innerMap_codec() {
		return *(Codec<int32_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<int32_t, int32_t>*& innerMap_() {
		return *(MapField2<int32_t, int32_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::Int32ToIntMap*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Int32ToIntMap*>* (*)(void *))(Il2CppBase() + 0x1468670))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x14686D4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Int32ToIntMap*))(Il2CppBase() + 0x14687F4))(this);
	}
	template <typename R = ProtoModels::Int32ToIntMap*> R Clone() {
		return ((R (*)(Int32ToIntMap*))(Il2CppBase() + 0x146894C))(this);
	}
	 MapField2<int32_t, int32_t>* get_InnerMap() {
		return ((MapField2<int32_t, int32_t>* (*)(Int32ToIntMap*))(Il2CppBase() + 0x14689A8))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Int32ToIntMap*, Il2CppObject*))(Il2CppBase() + 0x14689B0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Int32ToIntMap* other) {
		return ((R (*)(Int32ToIntMap*, ProtoModels::Int32ToIntMap*))(Il2CppBase() + 0x1468A20))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468AAC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468AD8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468B3C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468BDC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Int32ToIntMap* other) {
		return ((R (*)(Int32ToIntMap*, ProtoModels::Int32ToIntMap*))(Il2CppBase() + 0x1468C6C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468CE4))(this, input);
	}

};

}
