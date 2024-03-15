#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class IntToInt32ToIntMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "IntToInt32ToIntMap"));
	}

	 static MessageParser1<ProtoModels::IntToInt32ToIntMap*>*& _parser() {
		return *(MessageParser1<ProtoModels::IntToInt32ToIntMap*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& OuterMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int32_t, ProtoModels::Int32ToIntMap*>*& _map_outerMap_codec() {
		return *(Codec<int32_t, ProtoModels::Int32ToIntMap*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<int32_t, ProtoModels::Int32ToIntMap*>*& outerMap_() {
		return *(MapField2<int32_t, ProtoModels::Int32ToIntMap*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::IntToInt32ToIntMap*>* get_Parser() {
		return ((MessageParser1<ProtoModels::IntToInt32ToIntMap*>* (*)(void *))(Il2CppBase() + 0x14699F4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1469A58))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469B78))(this);
	}
	template <typename R = ProtoModels::IntToInt32ToIntMap*> R Clone() {
		return ((R (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469CD0))(this);
	}
	 MapField2<int32_t, ProtoModels::Int32ToIntMap*>* get_OuterMap() {
		return ((MapField2<int32_t, ProtoModels::Int32ToIntMap*>* (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469D2C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(IntToInt32ToIntMap*, Il2CppObject*))(Il2CppBase() + 0x1469D34))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::IntToInt32ToIntMap* other) {
		return ((R (*)(IntToInt32ToIntMap*, ProtoModels::IntToInt32ToIntMap*))(Il2CppBase() + 0x1469DA4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469E30))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469E5C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(IntToInt32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1469EC0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(IntToInt32ToIntMap*))(Il2CppBase() + 0x1469F60))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::IntToInt32ToIntMap* other) {
		return ((R (*)(IntToInt32ToIntMap*, ProtoModels::IntToInt32ToIntMap*))(Il2CppBase() + 0x1469FF0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(IntToInt32ToIntMap*, uintptr_t))(Il2CppBase() + 0x146A068))(this, input);
	}

};

}
