
#include <gmock/gmock.h>

#include <glbinding/SharedBitfield.h>

using namespace glbinding;

enum class A
{
    A_a,
    A_b,
    A_c
};

enum class B
{
    B_a,
    B_b,
    B_c
};

enum class C
{
    C_a,
    C_b,
    C_c
};

TEST(SharedBitfield, Usage)
{
    SharedBitfield<A, B, C> bitsA_a = A::A_a;
    SharedBitfield<A, B, C> bitsA_b = A::A_b;
    SharedBitfield<A, B, C> bitsA_c = A::A_c;
    SharedBitfield<A, B, C> bitsB_a = B::B_a;
    SharedBitfield<A, B, C> bitsB_b = B::B_b;
    SharedBitfield<A, B, C> bitsB_c = B::B_c;
    SharedBitfield<A, B, C> bitsC_a = C::C_a;
    SharedBitfield<A, B, C> bitsC_b = C::C_b;
    SharedBitfield<A, B, C> bitsC_c = C::C_c;

    EXPECT_EQ(bitsA_a, A::A_a);
    EXPECT_EQ(bitsB_a, C::C_a);
    EXPECT_EQ(bitsA_b, C::C_b);
    EXPECT_EQ(bitsB_b, B::B_b);
    EXPECT_EQ(bitsA_c, A::A_c);
    EXPECT_EQ(bitsB_c, C::C_c);

    EXPECT_EQ(A::A_a, bitsA_a);
    EXPECT_EQ(C::C_a, bitsB_a);
    EXPECT_EQ(C::C_b, bitsA_b);
    EXPECT_EQ(B::B_b, bitsB_b);
    EXPECT_EQ(A::A_c, bitsA_c);
    EXPECT_EQ(C::C_c, bitsB_c);

    EXPECT_EQ(bitsA_a, bitsB_a);
    EXPECT_EQ(bitsB_a, bitsC_a);
    EXPECT_EQ(bitsA_b, bitsB_b);
    EXPECT_EQ(bitsB_b, bitsC_b);
    EXPECT_EQ(bitsA_c, bitsB_c);
    EXPECT_EQ(bitsB_c, bitsC_c);

    bitsC_c = bitsC_a;
    bitsC_b = B::B_b;
}
